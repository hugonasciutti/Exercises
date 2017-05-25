class getAndSet {
  constructor(value) {
    this.anyValue = value;
  }

  get text() {
    return this.anyValue;
  }

  set text(value) {
    this.anyValue = value;
    console.log('The value has been set!');
  }
}

var objectGS = new getAndSet('Some text for test')

// GET
// objectGS.text
// Some text for test


// SET
// objectGS.text = 'new Text'

// GET
// objectGS.text
// new Text
