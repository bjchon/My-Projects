//Class and Constructors
class Person {
    name;
  
    constructor(name) {
      this.name = name;
    }
  
    introduceSelf() {
      console.log(`Hi! I'm ${this.name}`);
    }
  }

const giles = new Person("Giles");

giles.introduceSelf(); // Hi! I'm Giles

/* no constructor in this example */
class Animal {
    sleep() {
      console.log("zzzzzzz");
    }
  }
  
  const spot = new Animal();
  
  spot.sleep(); // 'zzzzzzz'

//Inheritance

class Professor extends Person {
    teaches;

    constructor(name, teaches) {
        super(name);
        this.teaches = teaches;
    }

    introduceSelf() {
        console.log(
            `My name is ${this.name}, and I will be your ${this.teaches} professor`,
        );
    }

    grade(paper) {
        const grade = Math.floor(Math.random() * (5-1) + 1);
        console.log(grade);
    }
}

const walsh = new Professor("Walsh", "Psychology");
walsh.introduceSelf(); // 'My name is Walsh, and I will be your Psychology professor'

walsh.grade("my paper"); // some random grade

//Encapsulation
class Student extends Person {
    #year;
  
    constructor(name, year) {
      super(name);
      this.#year = year;
    }
  
    introduceSelf() {
      console.log(`Hi! I'm ${this.name}, and I'm in year ${this.#year}.`);
    }
  
    canStudyArchery() {
      return this.#year > 1;
    }
  }

//private methods
class Example {
    somePublicMethod() {
      this.#somePrivateMethod();
    }
  
    #somePrivateMethod() {
      console.log("You called me?");
    }
  }
  
  const myExample = new Example();
  
  myExample.somePublicMethod(); // 'You called me?'
  
  //myExample.#somePrivateMethod(); // SyntaxError