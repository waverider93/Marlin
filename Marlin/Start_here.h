#pragma once
#define SHORT_BUILD_VERSION "2+ Build 482"
#define WEBSITE_URL Youtube
#define SOURCE_CODE_URL GitHub

// Ctrl+click to open links
#define Youtube             "https://youtube.com/verta"
#define Discord             "https://discord.gg/brq79WQ"
#define Forum               "http://www.vertshobbies.com/"
#define PO_Box              "https://youtube.com/verta/about" 
#define Paypal              "https://www.paypal.me/vertabreaker"
#define Patreon             "https://www.patreon.com/vertabreaker"
#define GitHub              "https://github.com/Vertabreak/Marlin"
#define Thingivese          "https://www.thingiverse.com/Vertabreaker"
#define Geeetech_Forum      "https://www.geeetech.com/forum/viewtopic.php?f=20&t=69957"
#define Contributed_Code    "https://github.com/MarlinFirmware/Marlin/commits/bugfix-2.0.x?author=Vertabreak"

//-------------------------------------------------------------------------------------------------------------------------
// Remove // to enable - add // to disable                                                                                |
// Complete steps 1 thru 4 > build > flash, its that simple there are hundreds of combinations & more being added.        |
// Post flash initilize the eeprom - M502+M500 or menu option load failsafe+store settings.                               |
// Guides on my youtube, when you watch/like/subscribe/share it helps support the channel and helps it grow.              | 
// Looking for help or have a question? join us on the discord or post on the forums.                                     |
// Confirmed to compile with vscode and the platformio extension or marlin auto build extension                           |
// Sometimes Vscode gets weird click the trashcan clean button and restart vscode it often fixs the issue.                |
//-------------------------------------------------------------------------------------------------------------------------

//(Step 1) enable 1 base model/frame
//GT2560 Boards - vscode: default_envs = mega2560 in platformio.ini
#define GTA10       // A10 & Variants
//#define GTA20       // A20 & Variants
//#define MECREATOR2  // Mecreator2 & Variants     
//#define I3PROA      // I3ProA & Variants
//#define I3PROB      // I3PROB & Variants
//#define I3PROC      // I3PROC & Variants
//#define I3PROW      // I3PROW & Variants
//#define I3PROX      // I3PROX & Variants

//GTM32 Boards - vscode: default_envs = STM32F103VE_GTM32 in platformio.ini
//#define GTA30       // A30 & Variants
//#define GTE180      // E180 & Variants
//#define GTM201      // M201 & Variants - testing
//#define GTD200      // D200 & Variants - testing

//Melzi Boards - vscode: default_envs = melzi in platformio.ini
//#define ENDER3      // ENDER3 & Variants - testing 

//(Step 2) enable 1 driver setting or none for stock
//#define A5984      // Enable A5984   all drivers
//#define DRV8825    // Enable DRV8825 all drivers
//#define LV8729     // Enable LV8729  all drivers
//#define L6470      // Enable L6470   all drivers
//#define TB6560     // Enable TB6560  all drivers
//#define TB6600     // Enable TB6600  all drivers

//#define TMC2208S   // Enable TMC2208 Standalone all drivers
//#define TMC2209S   // Enable TMC2209 Standalone all drivers
//#define TMC2130S   // Enable TMC2130 Standalone all drivers
//#define TMC2160S   // Enable TMC2160 Standalone all drivers
//#define TMC26XS    // Enable TMC226X Standalone all drivers
//#define TMC2660S   // Enable TMC2660 Standalone all drivers
//#define TMC5130S   // Enable TMC5130 Standalone all drivers
//#define TMC5160S   // Enable TMC5160 Standalone all drivers

//#define TMC2208U   // Enable TMC2208 UART/SPI all drivers
//#define TMC2209U   // Enable TMC2209 UART/SPI all drivers
//#define TMC2130U   // Enable TMC2130 UART/SPI all drivers
//#define TMC2160U   // Enable TMC2160 UART/SPI all drivers
//#define TMC26XU    // Enable TMC226X UART/SPI all drivers
//#define TMC2660U   // Enable TMC2660 UART/SPI all drivers
//#define TMC5130U   // Enable TMC5130 UART/SPI all drivers
//#define TMC5160U   // Enable TMC5160 UART/SPI all drivers

//(Step 3) enable 1 if you have mixing or multi extruder
//#define MIX      // Enable Mixing    2 in 1 - 1 Virtual Stepper (M)
//#define CYCLOPS  // Enable Cyclops   2 in 1 - #Physical Stepper (C) 
//#define DUALEX   // 2 Extruders      2 in 2 - #Physical Stepper (D) 
//#define MIXT     // Enable Mixing    3 in 1 - 1 Virtual Stepper (T)
//#define CYCLOPST // Enable Cyclops   3 in 1 - #Physical Stepper (CT)
//#define TRIEX    // 3 Extruders      3 in 3 - #Physical Stepper (E3)
 
//(Step 4) enable 1 probe type or none for manual (stock) - No GTM32 probe support yet
//#define TOUCHPROBE  // Enable Touch Type Probe (Bltouch / 3Dtouch)
//#define FMP         // Enable Fixed Mounted Type Probe (Capacitive / Inductive)

//------------------------------
//Optional settings & features |
//------------------------------

//Probe settings
//#define PROBE5X          // Probe 5X take the average - May effect accuracy +-
//#define HEATERACCURACY   // Disable heaters while probing - May effect accuracy +-
//#define HALFSPEED        // Reduce probing speed by 50% = 120 - May effect accuracy +-
//#define DOUBLESPEED      // Raise probing speed by 100% = 480 - May effect accuracy +-

//Optional features
//#define NOSCREEN         // Disable the screen and sdsupport - Save alot of resources good for octoprint users
//#define PLR              // Enabled power loss resume - Only functions from SDcard
//#define RUNOUT           // Enable filament runout sensor - Only If you have them and want to use them
//#define BEDCLIPS         // Enable to avoid bed clips (manual or probe) - Only If you have them and want to use them
//#define LINADV           // Enable linear advance.
//#define CASELIGHT        // Enable case light menu if board has led header.
//#define FANSCALING       // Enabled PID FAN SCALING
//#define EXTRUSIONSCALING // Enabled PID EXTRUSION SCALING
//#define ACTIONCOMMANDS   // Enable ACTION COMMANDS for use with octoprint
//#define MESHVALIDATE     // Enable G26 mesh validation does not work well in my testing

//Custom driver set if none enabled in step 2
//#define CUSTOMDRIVERS     // Define Custom drivers 
#if ENABLED (CUSTOMDRIVERS)
   //'A4988', 'A5984', 'DRV8825', 'LV8729', 'L6470', 'L6474', 'POWERSTEP01', 'TB6560', 'TB6600', 'TMC2100', 'TMC2130', 'TMC2130_STANDALONE', 'TMC2160'
   //'TMC2160_STANDALONE', 'TMC2208', 'TMC2208_STANDALONE', 'TMC2209', 'TMC2209_STANDALONE', 'TMC26X', 'TMC26X_STANDALONE', 'TMC2660', 'TMC2660_STANDALONE'
   //'TMC5130', 'TMC5130_STANDALONE', 'TMC5160', 'TMC5160_STANDALONE'
   
 // Timings
   #define X_DRIVER_TYPE  TMC2208_STANDALONE
   #define Y_DRIVER_TYPE  TMC2208_STANDALONE
   #define Z_DRIVER_TYPE  TMC2208_STANDALONE
   #define E0_DRIVER_TYPE A4988
   #define E1_DRIVER_TYPE A4988
   #define E2_DRIVER_TYPE A4988

// Motor directions
   #define CUSTOMX true // true/false to change direction
   #define CUSTOMY true // true/false to change direction
   #define CUSTOMZ true // true/false to change direction
   #define INVERTE      // enable false / disabe true to change direction

#endif

//Used to switch the default board of the model selected above
//#define CUSTOMBOARD // Enable Custom Board
#if ENABLED (CUSTOMBOARD)
  #define MOTHERBOARD BOARD_RAMPS_14_EFB  // Board list in src/pins/pins.h
#endif

//Framework for adding a new printer to this config
//#define NEWMODEL // New model

//-----------------------------
//logic to reduce setup steps | 
//-----------------------------

//Multiextruder 
#if ANY(MIX, MIXT, CYCLOPS, CYCLOPST, DUALEX, TRIEX)
  #define MULTIEXTRUDER 
#endif

//TMC drivers
#if ANY(TMC2208S, TMC2209S, TMC2130S, TMC2160S, TMC26XS, TMC2660S, TMC5130S, TMC5160S) || ANY(TMC2208U, TMC2209U, TMC2130U, TMC2160U, TMC26XU, TMC2660U, TMC5130U, TMC5160U)
  #define TMCCHIPS
#endif

//Models with direct drive
#if ANY(MECREATOR2, I3PROA, I3PROB, I3PROC, I3PROW, I3PROX)
  #define DIRECTDRIVE
#endif

//MCU32 board models
#if ANY(GTA30, GTE180, GTM201, GTD200)
  #define MCU32
#endif

//AT2560 board models
#if ANY(GTA10, GTA20, MECREATOR2, I3PROA, I3PROB, I3PROC, I3PROW, I3PROX)
  #define AT2560
#endif

//AT1280 board models
#if ENABLED (ENDER3)
  #define AT1280
#endif

//Bed clip logic - use mesh inset or min probe edge to avoid clips not both
#if ENABLED (BEDCLIPS)
  #define MESH_INSET 10   // Move mesh in #mm from edge
  //#define MESH_MIN_X MESH_INSET
  //#define MESH_MIN_Y MESH_INSET
  //#define MESH_MAX_X X_BED_SIZE - (MESH_INSET) - 40 //PROBE OFFSET X - Workaround for preventing exceeding Max X in some cases
  //#define MESH_MAX_Y Y_BED_SIZE - (MESH_INSET)
#else
  #define MESH_INSET 0    // Move mesh in #mm from edge
  //#define MESH_MIN_X MESH_INSET
  //#define MESH_MIN_Y MESH_INSET
  //#define MESH_MAX_X X_BED_SIZE - (MESH_INSET) - 40 //PROBE OFFSET X - Workaround for preventing exceeding Max X in some cases
  //#define MESH_MAX_Y Y_BED_SIZE - (MESH_INSET)
#endif

//Probe offset logic - suggest you mesure yours and adjust as needed. 
#if DISABLED (MULTIEXTRUDER) && ANY(TOUCHPROBE, FMP) && ANY (GTA10, GTA20)
  #define NOZZLE_TO_PROBE_OFFSET { -38, 5, 0 } // Nozzle To Probe offset XYZ A10/A20 - this is what it is on my test machines yours could differ 
#elif ENABLED (MULTIEXTRUDER) && ANY(TOUCHPROBE, FMP) && ANY (GTA10, GTA20)
  #define NOZZLE_TO_PROBE_OFFSET { -40, 0, 0 }  // Nozzle To Probe offset XYZ A10M+T/A20M+T - this is what it is on my test machines yours could differ
#else
  #define NOZZLE_TO_PROBE_OFFSET { 0, 0, 0 }
#endif

//Bed offset logic - distance from endstop to bed, nozzle on front left bed edge should = X0 Y0
#if  ANY (GTA10, GTA20, GTA30) && ANY(MIXT, CYCLOPST, CYCLOPST)
  #define X_MIN_POS -1   //- this is what it is on my test machines yours could differ
  #define Y_MIN_POS -7   //- this is what it is on my test machines yours could differ
#elif ANY (GTA10, GTA20, GTA30)
  #define X_MIN_POS -10  //- this is what it is on my test machines yours could differ
  #define Y_MIN_POS -5   //- this is what it is on my test machines yours could differ
#elif ENABLED (NEWMODEL) 
  #define X_MIN_POS 0        
  #define Y_MIN_POS 0  
#else
  #define X_MIN_POS 0        
  #define Y_MIN_POS 0      
#endif

//Steps selection logic
#if DISABLED (MULTIEXTRUDER) 
  #define DEFAULT_AXIS_STEPS_PER_UNIT  { 80, 80, 400, 95 }  // ungeared extruder found on a10/a20/a30/i3pro
  //#define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 800, 95 } 
  //#define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 2560, 95 } // M8 Z rod steps 2560 found on old I3pro
  #else
    #define DEFAULT_AXIS_STEPS_PER_UNIT  { 80, 80, 400, 430 } // geared extruder found on M & T variants
    //#define DEFAULT_AXIS_STEPS_PER_UNIT  { 80, 80, 800, 430 } 
    //#define DEFAULT_AXIS_STEPS_PER_UNIT  { 80, 80, 2560, 430 } // M8 Z rod steps 2560 found on old I3pro
#endif

//Motor direction logic
#if ENABLED (TMCCHIPS) && DISABLED (MULTIEXTRUDER) || DISABLED (TMCCHIPS) && ENABLED (MULTIEXTRUDER)
  #define INVERTE     // Invert E direction disabe if wrong direction - Geared exturders invert E (stock)
#endif

#if ENABLED (TMCCHIPS)
  #define INVERTXYZ   // Invert XYZ direction disable if wrong direction. 
#endif
