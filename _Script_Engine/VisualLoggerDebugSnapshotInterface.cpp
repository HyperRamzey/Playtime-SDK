#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "VisualLoggerDebugSnapshotInterface.hpp"
_Script_CoreUObject::Class* _Script_Engine::VisualLoggerDebugSnapshotInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.VisualLoggerDebugSnapshotInterface");
    return result;
}