#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\LatentActionInfo.hpp"
#include "LuminARSessionConfig.hpp"
#include "LuminARSessionFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_MagicLeapAR::LuminARSessionFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapAR.LuminARSessionFunctionLibrary");
    return result;
}
void _Script_MagicLeapAR::LuminARSessionFunctionLibrary::StartLuminARSession(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::LatentActionInfo LatentInfo, _Script_MagicLeapAR::LuminARSessionConfig* Configuration) {
    return;
}
