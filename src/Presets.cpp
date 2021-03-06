#include "Presets.h"

/*
  Edit your presets here
  ======================
  This file is full of presets to help you easily switch between when
  you are developing your patterns and when you want to display live
  on a projector.
 */
const int developmentFirstWindowWidth = 800;
const int developmentFirstWindowHeight = 800;
const int developmentFirstWindowX = 816;
const int developmentFirstWindowY = 0;

const int developmentSecondWindowWidth = 616;
const int developmentSecondWindowHeight = 416;
const int developmentSecondWindowX = 0;
const int developmentSecondWindowY = 0;

const int developmentNumGridLinesX = 14;
const int developmentNumGridLinesY = 10;

const int developmentDesignCanvasX = 402;
const int developmentDesignCanvasY = 8;
const int developmentDesignCanvasWidth = 240;
const int developmentDesignCanvasHeight = 180;
const int developmentDesignCanvasLabelX = 402;
const int developmentDesignCanvasLabelY = 204;

const int developmentLiveCanvasX = 8;
const int developmentLiveCanvasY = 8;
const int developmentLiveCanvasWidth = 600;
const int developmentLiveCanvasHeight = 400;

const int developmentBufferPreviewX = 402;
const int developmentBufferPreviewY = 224;
const int developmentBufferPreviewWidth = 80;
const int developmentBufferPreviewHeight = 80;
const int developmentBufferMargin = 16;

const int developmentNumberBoxWidth = 100;
const int developmentNumberBoxHeight = 20;

const int developmentInstructionsX = 8;
const int developmentInstructionsY = 18;
const int developmentPlaybackVolumeX = 9;
const int developmentPlaybackVolumeY = 726;
const int developmentNonPlaybackVolumeX = 320;
const int developmentNonPlaybackVolumeY = 746;

const int developmentNumberTagMargin = 20;
const int developmentNumberBoxMargin = 6;
const int developmentNumberTagOffsetX = -20;
const int developmentNumberTagOffsetY = 14;

const int developmentNewMaskFrameWidth = 70;
const int developmentNewMaskFrameHeight = 100;

const bool developmentStartFullscreen = false;
const char* developmentStorageDirectory = "development";

/*
  Production mode presets
  =======================
*/

const int productionNumGridLinesX = 60;
const int productionNumGridLinesY = 46;

const int productionDesignCanvasX = 10;
const int productionDesignCanvasY = 10;
const int productionDesignCanvasWidth = 1004;
const int productionDesignCanvasHeight = 710;
const int productionDesignCanvasLabelX = -1000;
const int productionDesignCanvasLabelY = -1000;

const int productionBufferPreviewX = 10;
const int productionBufferPreviewY = 730;
const int productionBufferPreviewWidth = 150;
const int productionBufferPreviewHeight = 150;
const int productionBufferMargin = 16;

const int productionNumberBoxWidth = 290;
const int productionNumberBoxHeight = 48;

const int productionInstructionsX = 1028;
const int productionInstructionsY = 26;
const int productionPlaybackVolumeX = 1028;
const int productionPlaybackVolumeY = 688;
const int productionNonPlaybackVolumeX = 1651;
const int productionNonPlaybackVolumeY = 736;

const int productionNumberTagMargin = 20;
const int productionNumberBoxMargin = 12;
const int productionNumberTagOffsetX = -18;
const int productionNumberTagOffsetY = 28;

const int productionNewMaskFrameWidth = 200;
const int productionNewMaskFrameHeight = 300;

const bool productionStartFullscreen = true;
const char* productionStorageDirectory = "production";

void Presets::setMode(PresetMode _mode){
    mode = _mode;
    load();
}

PresetMode Presets::getMode(){
    return mode;
}

void Presets::cycleMode(){
    if(mode == PRESETS_DEVELOPMENT){
        setMode(PRESETS_PRODUCTION);
    }else if(mode == PRESETS_PRODUCTION){
        setMode(PRESETS_DEVELOPMENT);
    }
}

bool Presets::isDevelopmentMode(){
    return mode == PRESETS_DEVELOPMENT;
}

bool Presets::isProductionMode(){
    return mode == PRESETS_PRODUCTION;
}

void Presets::load() {
    if(mode == PRESETS_DEVELOPMENT) {
        loadDevelopmentValues();
    } else if(mode == PRESETS_PRODUCTION) {
        loadProductionValues();
    }
}

void Presets::loadDevelopmentValues() {
    firstWindowWidth = developmentFirstWindowWidth;
    firstWindowHeight = developmentFirstWindowHeight;
    firstWindowX = developmentFirstWindowX;
    firstWindowY = developmentFirstWindowY;
    
    secondWindowWidth = developmentSecondWindowWidth;
    secondWindowHeight = developmentSecondWindowHeight;
    secondWindowX = developmentSecondWindowX;
    secondWindowY = developmentSecondWindowY;
    
    numGridLinesX = developmentNumGridLinesX;
    numGridLinesY = developmentNumGridLinesY;
    
    designCanvasX = developmentDesignCanvasX;
    designCanvasY = developmentDesignCanvasY;
    designCanvasWidth = developmentDesignCanvasWidth;
    designCanvasHeight = developmentDesignCanvasHeight;
    designCanvasLabelX = developmentDesignCanvasLabelX;
    designCanvasLabelY = developmentDesignCanvasLabelY;
    
    liveCanvasX = developmentLiveCanvasX;
    liveCanvasY = developmentLiveCanvasY;
    liveCanvasWidth = developmentLiveCanvasWidth;
    liveCanvasHeight = developmentLiveCanvasHeight;
    
    bufferPreviewX = developmentBufferPreviewX;
    bufferPreviewY = developmentBufferPreviewY;
    bufferPreviewWidth = developmentBufferPreviewWidth;
    bufferPreviewHeight = developmentBufferPreviewHeight;
    bufferMargin = developmentBufferMargin;
    
    numberBoxWidth = developmentNumberBoxWidth;
    numberBoxHeight = developmentNumberBoxHeight;
    
    instructionsX = developmentInstructionsX;
    instructionsY = developmentInstructionsY;
    playbackVolumeX = developmentPlaybackVolumeX;
    playbackVolumeY = developmentPlaybackVolumeY;
    nonPlaybackVolumeX = developmentNonPlaybackVolumeX;
    nonPlaybackVolumeY = developmentNonPlaybackVolumeY;
    
    numberTagMargin = developmentNumberTagMargin;
    numberBoxMargin = developmentNumberBoxMargin;
    numberTagOffsetX = developmentNumberTagOffsetX;
    numberTagOffsetY = developmentNumberTagOffsetY;
    
    newMaskFrameWidth = developmentNewMaskFrameWidth;
    newMaskFrameHeight = developmentNewMaskFrameHeight;
    
    storageDirectory = developmentStorageDirectory;
}

void Presets::loadProductionValues() {
    numGridLinesX = productionNumGridLinesX;
    numGridLinesY = productionNumGridLinesY;
    
    designCanvasX = productionDesignCanvasX;
    designCanvasY = productionDesignCanvasY;
    designCanvasWidth = productionDesignCanvasWidth;
    designCanvasHeight = productionDesignCanvasHeight;
    designCanvasLabelX = productionDesignCanvasLabelX;
    designCanvasLabelY = productionDesignCanvasLabelY;

    bufferPreviewX = productionBufferPreviewX;
    bufferPreviewY = productionBufferPreviewY;
    bufferPreviewWidth = productionBufferPreviewWidth;
    bufferPreviewHeight = productionBufferPreviewHeight;
    bufferMargin = productionBufferMargin;
    
    numberBoxWidth = productionNumberBoxWidth;
    numberBoxHeight = productionNumberBoxHeight;
    
    instructionsX = productionInstructionsX;
    instructionsY = productionInstructionsY;
    playbackVolumeX = productionPlaybackVolumeX;
    playbackVolumeY = productionPlaybackVolumeY;
    nonPlaybackVolumeX = productionNonPlaybackVolumeX;
    nonPlaybackVolumeY = productionNonPlaybackVolumeY;
    
    numberTagMargin = productionNumberTagMargin;
    numberBoxMargin = productionNumberBoxMargin;
    numberTagOffsetX = productionNumberTagOffsetX;
    numberTagOffsetY = productionNumberTagOffsetY;
    
    newMaskFrameWidth = productionNewMaskFrameWidth;
    newMaskFrameHeight = productionNewMaskFrameHeight;
    
    storageDirectory = productionStorageDirectory;
}
