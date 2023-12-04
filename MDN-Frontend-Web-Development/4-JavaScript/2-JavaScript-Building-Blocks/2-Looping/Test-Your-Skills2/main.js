const nameSearch = 'Mustafa';
    const para = document.createElement('p');

    const phonebook = [
      { name : 'Chris', number : '1549' },
      { name : 'Li Kang', number : '9634' },
      { name : 'Anne', number : '9065' },
      { name : 'Francesca', number : '3001' },
      { name : 'Mustafa', number : '6888' },
      { name : 'Tina', number : '4312' },
      { name : 'Bert', number : '7780' },
      { name : 'Jada', number : '2282' },
    ]

    // Add your code here
    for (const person of phonebook)
    {
        if(nameSearch === person.name)
        {
            para.textContent = person.name + " " + person.number;
            break;
        }
    }

    // Don't edit the code below here!
    const section = document.querySelector('section');
    section.appendChild(para);