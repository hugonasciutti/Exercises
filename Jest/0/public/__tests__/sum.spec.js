import { sum } from '../javascripts/sum';

describe('General Test', () => {
  it('adds 1 + 2 equal 3', () => {
    expect(sum(1, 2)).toBe(3);
  })
  it('Mock', () => {
    const myMock = jest.fn();
    myMock('1');
    myMock('a', 'b');
    myMock('c');
    console.log(myMock.mock.calls);
  })
})
