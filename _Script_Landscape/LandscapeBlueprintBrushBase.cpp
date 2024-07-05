#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\IntPoint.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\TextureRenderTarget2D.hpp"
#include "LandscapeBlueprintBrushBase.hpp"
void _Script_Landscape::LandscapeBlueprintBrushBase::GetBlueprintRenderDependencies(void*& OutStreamableAssets) {
    return;
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeBlueprintBrushBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeBlueprintBrushBase");
    return result;
}
void _Script_Landscape::LandscapeBlueprintBrushBase::RequestLandscapeUpdate() {
    return;
}
_Script_Engine::TextureRenderTarget2D* _Script_Landscape::LandscapeBlueprintBrushBase::Render(bool InIsHeightmap, _Script_Engine::TextureRenderTarget2D* InCombinedResult, void*& InWeightmapLayerName) {
    return;
}
void _Script_Landscape::LandscapeBlueprintBrushBase::Initialize(_Script_CoreUObject::Transform& InLandscapeTransform, _Script_CoreUObject::IntPoint& InLandscapeSize, _Script_CoreUObject::IntPoint& InLandscapeRenderTargetSize) {
    return;
}
