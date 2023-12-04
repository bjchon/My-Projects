function clicked() {
const names = ['Chris', 'Li Kang', 'Anne', 'Francesca', 'Mustafa', 'Tina', 'Bert', 'Jada']
const para = document.createElement('p');
const section = document.querySelector('section');

// Add your code here
function chooseName(){

 para.textContent = names[(Math.floor(Math.random() * names.length))];

}

chooseName();

// Don't edit the code below here!

section.innerHTML = ' ';

section.appendChild(para);

}