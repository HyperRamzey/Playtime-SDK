#include "..\FUObjectArray.hpp"
#include "ChaosNotifyHandlerInterface.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
_Script_CoreUObject::Class* _Script_ChaosSolverEngine::ChaosNotifyHandlerInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ChaosSolverEngine.ChaosNotifyHandlerInterface");
    return result;
}
