#include "Zone.h"
#include "Cards/Card.h"

void AZone::PlaceCard(ACard* NewCard, ECardPosition Position)
{
	Card = NewCard;
	Card->CardPosition = Position;
}
