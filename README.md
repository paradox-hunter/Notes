# Notes

This is a C project that calculates the frequency of the notes in a given file and plays the sounds using wav.h and wav.c.

## Theory
A song is essentially a sequence of sounds, otherwise known as notes, each of which has some duration. In Western music, each of those notes is known by a letter, A through G. Those letters happen to correspond to the white keys on a piano, otherwise known as "natural keys," per the below.

![Sample Shot_1](https://github.com/paradox-hunter/Notes/blob/master/music_1.png)

Among all of those white keys are black keys, each of which is identified by its proximity to a white key, per the below. A black key immediately above (i.e., to the right of) a white key is identified by the same letter but with a suffix of ♯ (often typed as #), otherwise known as a sharp; a black key immediately below (i.e., to the left of) a white key is also identified by the same letter but with a suffix of ♭ (often typed as b), otherwise known as a flat. Every key on a piano, meanwhile, is said to be one semitone, otherwise known as a half step, away from its adjacent neighbor, whether white or black. The effect of # and b, otherwise known as accidentals, is to raise or lower, respectively, the pitch of a note by one semitone.


![Sample Shot_1](https://github.com/paradox-hunter/Notes/blob/master/music_2.png)

Pianos typically have as many as 88 keys, 52 of which are white. With only seven letters (A through G) with which to identify them, those letters necessarily identify multiple keys. And so notes are divided into octaves, groups of contiguous keys, each of which is numbered.Not only are notes identified by letters (and accidentals), then, but also by octaves.

Now, all of those keys, when pressed, generate vibrations and, in turn, waves of air molecules (i.e., alternations of high and low air pressure), otherwise known as sound waves, per the below. If those sound waves reach your ear, you’ll hear sounds. Each of those sound waves travels at some rate, otherwise known as its frequency. The higher a sound wave’s frequency, the higher the pitch of sound you’ll hear; the lower a sound wave’s frequency, the lower the pitch of sound you’ll hear. If curious as to why some air molecules sound better than others, you might like the magical mathematics of music.

![Sample Shot_1](https://github.com/paradox-hunter/Notes/blob/master/music_3.png)

```Chronological sequence of pictures of the compression of air molecules for a sound wave moving in the rightward direction. Source: https://web.stanford.edu/~zhoufan/MathematicsOfMusic.pdf.```

Among the most noteworthy (ha!) notes is Middle C, highlighted in cyan earlier, otherwise known as C4, since that C is in the piano’s fourth octave. Above Middle C (i.e., to its right) is another notable (ha!) note, A4, highlighted in yellow earlier, otherwise known as A440, since the frequency of its sound waves is 440 Hz; which means that they oscilate up and down 440 times per second.

The frequencies of one octave’s notes differ from those of adjacent octaves' notes by a factor of two. For instance, the frequency of A3 is 220 Hz (i.e., half that of A4), while the frequency of A5 is 880 Hz (i.e., twice that of A4). More generally, the frequency, f, of some note is 2n/12 × 440, where n is the number of semitones from that note to A4, where n is negative if that note is below (i.e., to the left of) A4 and positive if that note is above (i.e., to the right of) A4.

Musicians, though, tend to write music not with letters or frequencies but with visual notations, otherwise known as sheet music, whereby notes are written on or between lines, otherwise known as a staff, with any accidentals positioned to the left of each note.

With these building blocks can you represent a song like the below.

![Sample Shot_1](https://github.com/paradox-hunter/Notes/blob/master/music_4.png)

### Prerequisites

You only need a C compiler to run this program.

```
Give examples
```

### Usage

You can leverage "input redirection" in order to pass whole files into synthesize as input. For instance, to pass all of the notes in jeopardy.txt into synthesize at once, execute:

```
./synthesize jeopardy.wav < songs/jeopardy.txt
```

Then execute

```
open jeopardy.wav
```

or simply double-click jeopardy.wav in CS50 IDE’s file browser to open and (assuming no bugs!) listen to the song you just synthesized.


## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* This project is an extension of the CS50's Music taken by the author via edX
