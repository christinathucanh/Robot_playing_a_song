/***********************************************************************
     * Name(s)  Joshua Delarosa, Christina Vu                              *
     * Assignment name (Project  1)                                         *
     *                                                                     *
     * Assignment for 2/6/23                                               *
     ***********************************************************************/

    /* *********************************************************************
     * Academic honesty certification:                                     *
     *   Written/online sources used:                                      *
     *     CSC161 readings and lab, studio.h file and MyRoc.h file
      Mullett, Sara. “Mary Had a Little Lamb Easy Piano Music - Let’s Play Music.”
       Let’s Play Music, 26 Feb. 2014, www.letsplaykidsmusic.com/mary-had-a-little-lamb-easy-piano-music/.
       Hale, Sarah Josepha. Mary Had a Little Lamb. 1830.                  *
     *   Help obtained:                                                    *
     *     Class mentor Ray                                                *
     *     ["none" required for Homework Problems                          *
     *   My/our signature(s) below confirms that the above list of sources *
     *   is complete AND that I/we have not talked to anyone else          *
     *   (e.g., CSC 161 students) about the solution to this problem       *
     *                                                                     *
     *   Signature: Joshua Delarosa, Christina Vu                                                        *
     ***********************************************************************/

/* Test Plan for Project 1:

For our testing of project 1, we will make sure that the robot sings the notes in the order that we coded it. 

[X] Robot connects to the program
[x] The program prints the verse name and also the whole song title
[x] Robot plays each verse correctly
[x] Robot disconnects
The robot runs fine according to the checklist

 */

#include <stdio.h>
#include <MyroC.h>
#include "scale-notes.h"

const double quarter_note = 0.25; /* defines quarter note */
const double whole_note = 1; /* defines whole note */

// pre-conditions: none
// post-conditions: plays the main verse of mary had a little lamb
// This plays the main verse of mary had a little lamb.
void
main_verse (void)
{
  rBeep (whole_note, pitchE5);
  rBeep (whole_note, pitchD5);
  rBeep (whole_note, pitchC5);
  rBeep (whole_note, pitchD5);
  rBeep (whole_note, pitchE5);
  rBeep (whole_note, pitchE5);
  rBeep (whole_note, pitchE5);
}

// pre-conditions: none
// post-conditions: plays the first verse of mary had a little lamb
// This plays the first verse of mary had a little lamb.
void
first_verse (void)
{
  printf ("This plays the first verse of mary had a little lamb.\n");
  main_verse ();
}

// pre-conditions: none
// post-conditions: plays the second verse of mary had a little lamb
// This plays the second verse of mary had a little lamb.
void
second_verse (void)
{
  printf ("This plays the second verse of mary had a little lamb.\n");
  rBeep (quarter_note, pitchD5);
  rBeep (quarter_note, pitchD5);
  rBeep (quarter_note, pitchD5);
  rBeep (quarter_note, pitchE5);
  rBeep (quarter_note, pitchE5);
  rBeep (quarter_note, pitchE5);
}

// pre-conditions: none
// post-conditions: plays the third verse of mary had a little lamb
// This plays the third verse of mary had a little lamb.
void
third_verse  (void)
{
  printf ("This plays the third  verse of mary had a little lamb.\n");
  main_verse ();
}

// pre-conditions: none
// post-conditions: plays the fourth verse of mary had a little lamb
// This plays the fourth verse of mary had a little lamb.
void
fourth_verse (void)
{
  printf ("This plays the fourth verse of mary had a little lamb.\n");
  rBeep(quarter_note,pitchE5);
  rBeep(quarter_note,pitchD5);
  rBeep(quarter_note,pitchD5);
  rBeep(quarter_note,pitchE5); 
  rBeep(quarter_note,pitchD5);
  rBeep(quarter_note,pitchC5);
}

// pre-conditions: none
// post-conditions: This plays the whole song of Mary had a Little Lamb.
// This plays the whole song of Mary had a Little Lamb.
void
entire_song(void)
{ 
  printf ("This plays the entire song of mary had a little lamb.\n");
  first_verse();
  second_verse();
  third_verse();
  fourth_verse();
}

// pre-conditions: none
// post-conditions: This plays the whole song of Mary had a Little Lamb.
// This plays the whole song of Mary had a Little Lamb.
int main(void)
{
  rConnect("/dev/rfcomm0"); /* connects to the robot */
  rSetVolume ('H'); /* sets the volume */
  
  printf ("This song is Mary had a Little Lamb.\n");
  entire_song();
  entire_song();
  entire_song();
  
  rDisconnect(); /* disconnects from the robot */
}
// main ends
 
