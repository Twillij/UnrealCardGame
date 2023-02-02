#include "DrawAction.h"
#include "../Cards/Card.h"

UDrawAction::UDrawAction()
{
	DisplayName = FText::FromString("Draw");
}

bool UDrawAction::IsValidAction_Implementation()
{
	// To do: Check whether it's the draw phase

	return true;
}

void UDrawAction::Execute_Implementation()
{
	// To do: Draw the cards and add them to hand.
}
