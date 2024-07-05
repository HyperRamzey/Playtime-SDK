#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "LuminARFrameFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_MagicLeapAR::LuminARFrameFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapAR.LuminARFrameFunctionLibrary");
    return result;
}
bool _Script_MagicLeapAR::LuminARFrameFunctionLibrary::LuminARLineTrace(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector2D& ScreenPosition, void* TraceChannels, void*& OutHitResults) {
    return;
}
void* _Script_MagicLeapAR::LuminARFrameFunctionLibrary::GetTrackingState() {
    return;
}
