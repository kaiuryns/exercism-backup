#include "flower_field.h"
#include <stdlib.h>
#include <string.h>

char **annotate(const char **garden, const size_t rows) {
   if (!garden || !rows) return NULL;

   size_t cols = strlen(garden[0]);

   char **new_garden = malloc((rows + 1) * sizeof(char *));
   if (!new_garden) return NULL;
   new_garden[rows] = NULL; 

   for (size_t i = 0; i < rows; i++) {
      new_garden[i] = malloc((cols + 1) * sizeof(char));
      if (!new_garden[i]) {
         while (i > 0) free(new_garden[--i]);
         free(new_garden);
         return NULL;
      }
      strcpy(new_garden[i], garden[i]);
   }

   if (cols == 0) return new_garden;

   for (size_t i = 0; i < rows; i++) {
      for (size_t j = 0; j < cols; j++) {
         
         if (new_garden[i][j] == ' ') {
            int count = 0;

            for (int dr = -1; dr <= 1; dr++) {
               for (int dc = -1; dc <= 1; dc++) {
                  int r = (int)i + dr;
                  int c = (int)j + dc;

                  if (r >= 0 && r < (int)rows && c >= 0 && c < (int)cols) {
                     if (garden[r][c] == '*') {
                        count++;
                     }
                  }
               }
            }

            if (count > 0) {
               new_garden[i][j] = '0' + count;
            }
         }
         
      }
   }

   return new_garden;
}

void free_annotation(char **annotation) {
   if (!annotation) return;

   for (size_t i = 0; annotation[i] != NULL; i++) {
      free(annotation[i]);
   }
   free(annotation);
}
