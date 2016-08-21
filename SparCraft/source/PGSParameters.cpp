#include "PGSParameters.h"

using namespace SparCraft;

PGSParameters::PGSParameters(const size_t & playerID)
    : _playerID(playerID)
    , _iterations(1)
    , _responses(0)
{

}

void PGSParameters::setEnemySeedPlayer(const PlayerPtr & player)
{
    _enemySeedPlayer = player;
}

void PGSParameters::setIterations(const size_t & iterations)
{
    _iterations = iterations;
}

void PGSParameters::setResponses(const size_t & responses)
{
    _responses = responses;
}

void PGSParameters::setTimeLimit(const size_t & timeLimit)
{
    _timeLimit = timeLimit;
}

void PGSParameters::addPortfolioPlayer(const size_t & playerID, const PlayerPtr & player)
{
    _playerPortfolio[playerID].push_back(player);
}

const PlayerPtr & PGSParameters::getEnemySeedPlayer() const
{
    return _enemySeedPlayer;
}

const size_t & PGSParameters::getTimeLimit() const
{
    return _timeLimit;
}

const size_t & PGSParameters::getPlayer() const
{
    return _playerID;
}

const size_t & PGSParameters::getIterations() const
{
    return _iterations;
}

const size_t & PGSParameters::getResponses() const
{
    return _responses;
}

const std::vector<PlayerPtr> & PGSParameters::getPortfolio(const size_t & playerID) const
{
    return _playerPortfolio[playerID];
}