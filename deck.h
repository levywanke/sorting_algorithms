#ifndef DECK_H
#define DECK_H

#include <stdlib.h>

/**
 * enum kind_e - nums of pc
 * @SPADE: ss
 * @HEART: hs
 * @CLUB: hs
 * @DIAMOND: ds
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - function
 *
 * @value: card val
 * @kind: picked
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - cards one
 *
 * @card: dir to hds crd
 * @prev: start
 * @next: end
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);
int _strcmp(const char *s1, const char *s2);
char get_value(deck_node_t *card);
void insertion_sort_deck_kind(deck_node_t **deck);
void insertion_sort_deck_value(deck_node_t **deck);
void sort_deck(deck_node_t **deck);

#endif
