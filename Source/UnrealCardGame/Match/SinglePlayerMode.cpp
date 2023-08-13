#include "SinglePlayerMode.h"
#include "Turn.h"

UTurn* ASinglePlayerMode::GetCurrentTurn() const
{
	return Turns.Last();
}
