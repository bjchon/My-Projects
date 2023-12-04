const displayedImage = document.querySelector('.displayed-img');
const thumbBar = document.querySelector('.thumb-bar');

const btn = document.querySelector('button');
const overlay = document.querySelector('.overlay');

/* Declaring the array of image filenames */
const myArray = ['pic1.jpg', 'pic2.jpg', 'pic3.jpg', 'pic4.jpg', 'pic5.jpg'];


/* Declaring the alternative text for each image file */
const altText = {
    'pic1.jpg' : 'close up eye', 
    'pic2.jpg' : 'waves', 
    'pic3.jpg' : 'flowers', 
    'pic4.jpg' : 'Egyptian art', 
    'pic5.jpg' : 'butterfly'
}

/* Looping through images */
for (const image of myArray) {
    const newImage = document.createElement('img');
    newImage.setAttribute('src', `images/${image}`);
    newImage.setAttribute('alt', altText[image]);
    thumbBar.appendChild(newImage);
    newImage.addEventListener('click', e => {
        displayedImage.src = e.target.src;
        displayedImage.alt = e.target.alt;
    });
}

/* Wiring up the Darken/Lighten button */
btn.addEventListener('click', () => {
    const btnClass = btn.getAttribute('class');
    if(btnClass === 'dark') {
        btn.setAttribute('class','light');
        btn.textContent = 'Lighten';
        overlay.style.backgroundColor = 'rgb(0,0,0,.5)';
    } else {
        btn.setAttribute('class', 'dark');
        btn.textContent = 'Darken';
        overlay.style.backgroundColor = 'rgb(0,0,0,0)';
    }
});