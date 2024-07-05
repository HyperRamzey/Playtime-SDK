#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct TextureRenderTarget2D;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Script_CoreUObject {
struct IntPoint;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct LandscapeBlueprintBrushBase : public _Script_Engine::Actor {
    static _Script_CoreUObject::Class* static_class();
    void RequestLandscapeUpdate();
    _Script_Engine::TextureRenderTarget2D* Render(bool InIsHeightmap, _Script_Engine::TextureRenderTarget2D* InCombinedResult, void*& InWeightmapLayerName);
    void Initialize(_Script_CoreUObject::Transform& InLandscapeTransform, _Script_CoreUObject::IntPoint& InLandscapeSize, _Script_CoreUObject::IntPoint& InLandscapeRenderTargetSize);
    void GetBlueprintRenderDependencies(void*& OutStreamableAssets);
}; // Size: 0x220
#pragma pack(pop)
}
