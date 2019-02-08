// author: chris-scientist
// created at: 08/02/2019

#ifndef PLATFORMER_HIGH_SCORE_MANAGER
#define PLATFORMER_HIGH_SCORE_MANAGER

#include <Gamebuino-Meta.h>
#include <cstring>

#include "Constantes.h"
#include "Display.h"
#include "HighScore.h"

struct HighScoreManager {
  HighScore highScore1;
  HighScore highScore2;
  HighScore highScore3;
  uint8_t nbHighScore;
  uint8_t indexNewHighScore;
};

void initHighScoreManager(HighScoreManager &aManager);
void paintHighScoreWindow(const HighScoreManager& aScoreManager);
const HighScore& getHighScore(const HighScoreManager &aManager, uint8_t anIndex);
bool saveScoreIfNewHighScore(HighScoreManager &aManager, const uint8_t aTimeOfPart);
const uint8_t setHighScore4Time(HighScoreManager &aManager, const uint8_t aTimeOfPart);
void resetIndexNewHighScore(HighScoreManager &aManager);
void loadAllHighScore(HighScoreManager &aManager);
void loadHighScore(HighScore &aScore, uint16_t aBlockName, uint16_t aBlockScore);
void saveAllHighScore(HighScoreManager &aManager);
void saveHighScore(char * aName, uint8_t aScore, uint16_t aBlockName, uint16_t aBlockScore);

#endif
