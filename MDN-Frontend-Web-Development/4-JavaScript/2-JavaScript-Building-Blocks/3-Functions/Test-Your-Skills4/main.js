function clicked() {
    const section = document.querySelector('section');
    const names = ['Chris', 'Li Kang', 'Anne', 'Francesca', 'Mustafa', 'Tina', 'Bert', 'Jada'];
    const para = document.createElement('p');
    
/* Replaced by arrow function     

    function isShort(name) {
      return name.length < 5;
    } */
    
    const shortNames = names.filter(name => name.length < 5);
    para.textContent = shortNames;
    
    // Don't edit the code below here!
    
    section.innerHTML = ' ';
    
    section.appendChild(para);

}