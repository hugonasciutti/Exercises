/* Facts about The Simpsons
 * James Cheney
 * September 24, 2009
 */



% Some unary relations: child, male, female

child(bart).
child(milhouse).
child(lisa).
child(maggie).
child(rod).
child(todd).
child(ralph).

male(abe).
male(homer).
male(bart).
male(ned).
male(rod).
male(todd).
male(chief_wiggum).
male(ralph).
male(milhouse).
male(mr_burns).
male(smithers).
male(groundskeeper_willie).
male(principal_skinner).

female(marge).
female(lisa).
female(maggie).
female(maude).
female(mrs_krabappel).
female(ms_hoover).
female(patty).
female(selma).
female(jacqueline).

% Some binary relations: 
% father, mother, married, friend, neighbor, employs, teaches, catchphrase

father(abe, homer).
father(homer, bart).
father(homer, lisa).
father(homer, maggie).
father(ned, rod).
father(ned, todd).
father(chief_wiggum,ralph).

mother(marge, bart).
mother(marge, lisa).
mother(marge, maggie).
mother(jacqueline, marge).
mother(jacqueline, patty).
mother(jacqueline, selma).
mother(maude, rod).
mother(maude, todd).

married(homer, marge).
married(ned, maude).

friend(bart, milhouse).
friend(homer, ned).
friend(marge, maude).

neighbor(ned,homer).

employs(mr_burns, homer).
employs(mr_burns, smithers).
employs(principal_skinner, groundskeeper_willie).
employs(principal_skinner, mrs_krabappel).

teaches(ms_hoover, ralph).
teaches(ms_hoover, lisa).
teaches(mrs_krabappel, bart).
teaches(mrs_krabappel, milhouse).

catchphrase(homer, 'D\'oh!').
catchphrase(homer, 'Why you little...!').
catchphrase(marge, 'Hmmmmm...!').
catchphrase(bart, 'Ay caramba!').
catchphrase(bart, 'Don\'t have a cow, man!').
catchphrase(lisa, 'If anyone needs me, I\'ll be in my room.').
catchphrase(ned, 'Okily dokily!').
catchphrase(groundskeeper_willie, 'Bonjour, you cheese-eatin\' surrender monkeys!').
catchphrase(ralph, 'It tastes like...burning!').
catchphrase(mr_burns, 'Eeeeexcellent.').
