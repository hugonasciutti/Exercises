import { sum } from '../javascripts/sum';

describe('function sum()', () => {
  it('adds 1 + 2 equal 3', () => {
    expect(sum(1, 2)).toBe(3);
    expect(sum(5, 5)).toBe(10);
    expect(sum(10.0, 5.0)).toBe(15);
  });

  it('more than 2 arguments', () => {
    expect(sum(1, 2, 10)).toBe(3);
    expect(sum(1, 2, 9, 10)).toBe(3);
  });

  it('add(0.1, 0.2)', () => {
    expect(sum(10.1, 10.2)).toBeCloseTo(20.3);
    expect(sum(0.1, 0.2)).toBeCloseTo(0.3);
    expect(sum(0.5, 0.3)).toBeCloseTo(0.8);
  });

  it('expect to return null if not number', () => {
    expect(sum('a', 'a')).toBeNull();
    expect(sum('a', 2)).toBeNull();
    expect(sum(2, 'a')).toBeNull();
  });
});
