let konsole = {
	log: function (msg) {
		process.stdout.write(msg);
	},
	error: function (msg) {
		process.stderr.write(msg);
	}
};
konsole.log('konsole.log = Info\n');
konsole.error('konsole.error = ERROR\n');

// 1 == stdout
// 2 == stderr
// "1>" == File Descriptor
// node output.js 1> out.log
// node output.js 2> error.log

// In one line:
// node output.js 1> out.log 2> error.log

// Input:
// TTY(teletype) = Terminal ou keyboard
// PTY(pseudo-teletype) = Some kind of software like telnet, ssh or xterm;
