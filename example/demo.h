#ifndef DEMO_H
#define DEMO_H

#include "nanovg.h"

#ifdef __cplusplus
extern "C" {
#endif

struct DemoData {
	int fontNormal, fontBold, fontIcons, fontEmoji;
	int images[12];
};
typedef struct DemoData DemoData;

/* Fill `out` with a path to a file under the example resource directory. */
int demoResourcePath(char* out, unsigned int outSize, const char* relative);

int loadDemoData(NVGcontext* vg, DemoData* data);
void freeDemoData(NVGcontext* vg, DemoData* data);
void renderDemo(NVGcontext* vg, float mx, float my, float width, float height, float t, int blowup, DemoData* data);

#ifndef NANOVG_VULKAN_IMPLEMENTATION
void saveScreenShot(int w, int h, int premult, const char* name);
#endif

#ifdef __cplusplus
}
#endif

#endif // DEMO_H
