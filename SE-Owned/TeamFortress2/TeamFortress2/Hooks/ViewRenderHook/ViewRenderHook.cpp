#include "ViewRenderHook.h"
#include "../../Features/Chams/Chams.h"
#include "../../Features/Visuals/Visuals.h"

void __stdcall ViewRenderHook::LevelInit::Hook() {
	g_GlobalInfo.dtTicks = 0;

	Table.Original<fn>(index)(g_Interfaces.ViewRender);
}

void __stdcall ViewRenderHook::LevelShutdown::Hook() {
	Table.Original<fn>(index)(g_Interfaces.ViewRender);
}