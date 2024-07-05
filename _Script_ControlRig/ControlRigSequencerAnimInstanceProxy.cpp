#include "..\FUObjectArray.hpp"
#include "..\_Script_AnimGraphRuntime\AnimSequencerInstanceProxy.hpp"
#include "ControlRigSequencerAnimInstanceProxy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigSequencerAnimInstanceProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.ControlRigSequencerAnimInstanceProxy");
    return result;
}
