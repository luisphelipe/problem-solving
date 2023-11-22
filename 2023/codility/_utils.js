class ExpectClass {
  constructor(callback, input) {
    this.callback = callback;
    this.input = input;
  }

  toEqual(expected) {
    const debug = [];
    const actual = this.callback(this.input, debug);
    const success = expected === actual;

    const label = `${this.callback.name}(${this.input}) = ${expected}`;

    if (success) {
      console.log(`${label} : PASS`);
    } else {
      console.log(`\n${label} : FAIL`);
      console.error(`===> expected ${expected} got ${actual}`);
      if (debug.length) {
        console.log(debug.join("\n"));
      }
      console.log("");
    }
  }
}

const expect = (callback, input) => {
  return new ExpectClass(callback, input);
};

module.exports = { expect };
