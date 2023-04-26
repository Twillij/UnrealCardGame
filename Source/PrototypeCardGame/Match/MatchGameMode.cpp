#include "MatchGameMode.h"
#include "Turn.h"

UTurn* AMatchGameMode::GetCurrentTurn() const
{
	return Turns.Last();
}
