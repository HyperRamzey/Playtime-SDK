#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEntitySystem.hpp"
#include "TemplateSequencePropertyScalingInstantiatorSystem.hpp"
_Script_CoreUObject::Class* _Script_TemplateSequence::TemplateSequencePropertyScalingInstantiatorSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem");
    return result;
}