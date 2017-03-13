console.log('A ' + new Date());
// There are 2 loops / 2 returns in my EVENT LOOP/ 2 Processes, the second is delayed.
//   -1° Execute the entire application
//   -2° Execute the waiting processes
// setTimeout(callback, 0) will the execution for the next EVENT LOOP, it will stay on processes queue.
// The advantage to define a function for time 0 is to manage and improve the workflow of Event Loop processes by using less process power from the thread, leaving the process for the next event loop.
// Note that even being called before B the Event Loop only execute after the other from NodeJS
setTimeout(function () {
	console.log('setTimeout(callback, 0): ' + new Date());	
}, 0);
console.log('B ' + new Date());
