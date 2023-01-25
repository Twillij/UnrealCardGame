#include "SummonAction.h"
#include "../Board/Zone.h"
#include "../Cards/Card.h"

USummonAction::USummonAction()
{
	ActionName = FText::FromString("Summon");
}

bool USummonAction::IsValidAction_Implementation()
{
	// To do: Check summoning cost and other conditions

	return true;
}

void USummonAction::Execute_Implementation()
{
	// To do: Select valid target zone

	// To do: Do the summon
}

void USummonAction::Summon(AZone* TargetZone)
{
	TargetZone->PlaceCard(Card, ECardPosition::Standby);
}
