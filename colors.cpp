#include <iostream>
#include <unistd.h>
#include <ncurses.h>
#include <time.h>



int main(int argc, char ** argv)
{
  srandom(time(NULL));
  initscr();
  start_color();
  noecho();
  curs_set(false);

  int xmax, ymax;
  getmaxyx(stdscr,ymax,xmax);
  refresh();

  int pair = 0;
  for (int x = 0; x < xmax; x++)
  { for (int y = 0; y < ymax; y++)
    {
      init_pair(pair,0,pair);
      attron(COLOR_PAIR(pair));
      printw("%4d",pair);
      pair = (pair+1) % COLOR_PAIRS;
      refresh();
    }
  }
  while(getch() != 'q');
  endwin();
}
