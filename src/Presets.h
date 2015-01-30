#pragma once

enum PresetMode { PRESETS_DEVELOPMENT, PRESETS_PRODUCTION };

class Presets{
public:
    Presets(){
        setMode(PRESETS_DEVELOPMENT);
    }
    
    void setMode(PresetMode _mode);
    void cycleMode();
    
    PresetMode getMode();
    bool isDevelopmentMode();
    bool isProductionMode();
    
    //When running everything in a single window, usually PRESETS_DEVELOPMENT mode:
    int soloWindowWidth, soloWindowHeight;
    
    //When running two windows. The first window uses traditional ofToggleFullscreen().
    //The second window is generated by ofxSecondWindow. The title bar is removed and
    //the window is positioned and scaled to mimic fullscreen.
    //Usually associated with PRESETS_PRODUCTION mode:
    const char* secondWindowName;
    int secondWindowX, secondWindowY, secondWindowWidth, secondWindowHeight;

    int numGridLinesX, numGridLinesY;
    
    int designCanvasX, designCanvasY;
    int designCanvasWidth, designCanvasHeight;
    int designCanvasLabelX, designCanvasLabelY;
    
    int liveCanvasX, liveCanvasY;
    int liveCanvasWidth, liveCanvasHeight;
    
    int bufferPreviewX, bufferPreviewY;
    int bufferPreviewWidth, bufferPreviewHeight;
    int bufferMargin;
    
    int numberBoxWidth, numberBoxHeight;
    
    int instructionsX, instructionsY;
    int playbackVolumeX, playbackVolumeY;
    int nonPlaybackVolumeX, nonPlaybackVolumeY;
    
    int numberTagMargin, numberBoxMargin;
    int numberTagOffsetX, numberTagOffsetY;
    
    int newMaskFrameWidth, newMaskFrameHeight;
    
    bool startFullscreen;
    const char* storageDirectory;

protected:
    void load();
    void loadContextIndependantValues();
    void loadDevelopmentValues();
    void loadProductionValues();
   
    PresetMode mode;
};