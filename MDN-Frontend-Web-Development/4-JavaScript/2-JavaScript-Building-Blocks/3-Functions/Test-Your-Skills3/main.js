function clicked() {
const names = ['Chris', 'Li Kang', 'Anne', 'Francesca', 'Mustafa', 'Tina', 'Bert', 'Jada']
const para = document.createElement('p');
const section = document.querySelector('section');

// Add your code here
function randomNum(num1, num2) {
    return Math.floor(Math.random() * (num2 - num1) + num1);
}

function chooseName() {

 para.textContent = names[randomNum(0,names.length)];

}

chooseName();

// Don't edit the code below here!

section.innerHTML = ' ';

section.appendChild(para);

}