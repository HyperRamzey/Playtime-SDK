#include "..\FUObjectArray.hpp"
#include "ARCandidateImage.hpp"
#include "ARCandidateObject.hpp"
#include "ARSessionConfig.hpp"
#include "ARVideoFormat.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
bool _Script_AugmentedReality::ARSessionConfig::get_bGenerateNavMeshForMeshData() {
    return (*(uint8_t*)((uintptr_t)this + 0x32 + 0)) & 1 != 0;
}
bool _Script_AugmentedReality::ARSessionConfig::get_bGenerateMeshDataFromTrackedGeometry() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_AugmentedReality::ARSessionConfig::set_bRenderMeshDataInWireframe(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x34 + 0);
    *(uint8_t*)((uintptr_t)this + 0x34 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AugmentedReality::ARSessionConfig::set_bGenerateMeshDataFromTrackedGeometry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AugmentedReality::ARSessionConfig::get_bGenerateCollisionForMeshData() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
void _Script_AugmentedReality::ARSessionConfig::SetSessionTrackingFeatureToEnable(void* InSessionTrackingFeature) {
    return;
}
void* _Script_AugmentedReality::ARSessionConfig::get_FrameSyncMode() {
    return (void*)((uintptr_t)this + 0x41);
}
void _Script_AugmentedReality::ARSessionConfig::set_bGenerateCollisionForMeshData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AugmentedReality::ARSessionConfig::set_bGenerateNavMeshForMeshData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x32 + 0);
    *(uint8_t*)((uintptr_t)this + 0x32 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AugmentedReality::ARSessionConfig::get_PoseComponentClass() {
    return (void*)((uintptr_t)this + 0xd8);
}
bool _Script_AugmentedReality::ARSessionConfig::get_bUseMeshDataForOcclusion() {
    return (*(uint8_t*)((uintptr_t)this + 0x33 + 0)) & 1 != 0;
}
_Script_Engine::MaterialInterface*& _Script_AugmentedReality::ARSessionConfig::get_DefaultWireframeMeshMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x108);
}
void _Script_AugmentedReality::ARSessionConfig::set_bUseMeshDataForOcclusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x33 + 0);
    *(uint8_t*)((uintptr_t)this + 0x33 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AugmentedReality::ARSessionConfig::get_bRenderMeshDataInWireframe() {
    return (*(uint8_t*)((uintptr_t)this + 0x34 + 0)) & 1 != 0;
}
bool _Script_AugmentedReality::ARSessionConfig::get_bTrackSceneObjects() {
    return (*(uint8_t*)((uintptr_t)this + 0x35 + 0)) & 1 != 0;
}
bool _Script_AugmentedReality::ARSessionConfig::get_bUseOptimalVideoFormat() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 1 != 0;
}
void _Script_AugmentedReality::ARSessionConfig::set_bTrackSceneObjects(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x35 + 0);
    *(uint8_t*)((uintptr_t)this + 0x35 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AugmentedReality::ARSessionConfig::get_bUsePersonSegmentationForOcclusion() {
    return (*(uint8_t*)((uintptr_t)this + 0x36 + 0)) & 1 != 0;
}
void* _Script_AugmentedReality::ARSessionConfig::get_FaceTrackingDirection() {
    return (void*)((uintptr_t)this + 0x8d);
}
void _Script_AugmentedReality::ARSessionConfig::set_bUsePersonSegmentationForOcclusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x36 + 0);
    *(uint8_t*)((uintptr_t)this + 0x36 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AugmentedReality::ARSessionConfig::get_bUseSceneDepthForOcclusion() {
    return (*(uint8_t*)((uintptr_t)this + 0x37 + 0)) & 1 != 0;
}
void* _Script_AugmentedReality::ARSessionConfig::get_PointComponentClass() {
    return (void*)((uintptr_t)this + 0xb8);
}
void _Script_AugmentedReality::ARSessionConfig::set_bEnableAutoFocus(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3f + 0);
    *(uint8_t*)((uintptr_t)this + 0x3f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AugmentedReality::ARSessionConfig::set_bUseSceneDepthForOcclusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x37 + 0);
    *(uint8_t*)((uintptr_t)this + 0x37 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AugmentedReality::ARSessionConfig::set_bHorizontalPlaneDetection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AugmentedReality::ARSessionConfig::get_bUseAutomaticImageScaleEstimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_AugmentedReality::ARSessionConfig::set_bUseAutomaticImageScaleEstimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AugmentedReality::ARSessionConfig::get_PlaneComponentClass() {
    return (void*)((uintptr_t)this + 0xb0);
}
bool _Script_AugmentedReality::ARSessionConfig::get_bUseStandardOnboardingUX() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 1 != 0;
}
void* _Script_AugmentedReality::ARSessionConfig::get_SerializedARCandidateImageDatabase() {
    return (void*)((uintptr_t)this + 0x98);
}
void _Script_AugmentedReality::ARSessionConfig::set_bUseStandardOnboardingUX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AugmentedReality::ARSessionConfig::get_WorldAlignment() {
    return (void*)((uintptr_t)this + 0x3a);
}
void* _Script_AugmentedReality::ARSessionConfig::get_SessionType() {
    return (void*)((uintptr_t)this + 0x3b);
}
_Script_Engine::MaterialInterface*& _Script_AugmentedReality::ARSessionConfig::get_DefaultMeshMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x100);
}
void* _Script_AugmentedReality::ARSessionConfig::get_PlaneDetectionMode() {
    return (void*)((uintptr_t)this + 0x3c);
}
bool _Script_AugmentedReality::ARSessionConfig::get_bHorizontalPlaneDetection() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d + 0)) & 1 != 0;
}
bool _Script_AugmentedReality::ARSessionConfig::get_bVerticalPlaneDetection() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e + 0)) & 1 != 0;
}
void _Script_AugmentedReality::ARSessionConfig::set_bVerticalPlaneDetection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AugmentedReality::ARSessionConfig::get_bEnableAutoFocus() {
    return (*(uint8_t*)((uintptr_t)this + 0x3f + 0)) & 1 != 0;
}
void* _Script_AugmentedReality::ARSessionConfig::get_LightEstimationMode() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_AugmentedReality::ARSessionConfig::get_bEnableAutomaticCameraOverlay() {
    return (*(uint8_t*)((uintptr_t)this + 0x42 + 0)) & 1 != 0;
}
void* _Script_AugmentedReality::ARSessionConfig::GetPlaneDetectionMode() {
    return;
}
void _Script_AugmentedReality::ARSessionConfig::set_bEnableAutomaticCameraOverlay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x42 + 0);
    *(uint8_t*)((uintptr_t)this + 0x42 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AugmentedReality::ARSessionConfig::get_bEnableAutomaticCameraTracking() {
    return (*(uint8_t*)((uintptr_t)this + 0x43 + 0)) & 1 != 0;
}
void* _Script_AugmentedReality::ARSessionConfig::get_CandidateImages() {
    return (void*)((uintptr_t)this + 0x48);
}
void _Script_AugmentedReality::ARSessionConfig::set_bEnableAutomaticCameraTracking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x43 + 0);
    *(uint8_t*)((uintptr_t)this + 0x43 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AugmentedReality::ARSessionConfig::get_MeshComponentClass() {
    return (void*)((uintptr_t)this + 0xf0);
}
bool _Script_AugmentedReality::ARSessionConfig::get_bResetCameraTracking() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
void _Script_AugmentedReality::ARSessionConfig::set_bResetCameraTracking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AugmentedReality::ARSessionConfig::get_bResetTrackedObjects() {
    return (*(uint8_t*)((uintptr_t)this + 0x45 + 0)) & 1 != 0;
}
void _Script_AugmentedReality::ARSessionConfig::set_bResetTrackedObjects(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x45 + 0);
    *(uint8_t*)((uintptr_t)this + 0x45 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_AugmentedReality::ARSessionConfig::get_MaxNumSimultaneousImagesTracked() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
void* _Script_AugmentedReality::ARSessionConfig::get_FaceComponentClass() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_AugmentedReality::ARSessionConfig::get_EnvironmentCaptureProbeType() {
    return (void*)((uintptr_t)this + 0x5c);
}
void* _Script_AugmentedReality::ARSessionConfig::get_FaceTrackingUpdate() {
    return (void*)((uintptr_t)this + 0x8e);
}
void* _Script_AugmentedReality::ARSessionConfig::get_WorldMapData() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_AugmentedReality::ARSessionConfig::get_GeoAnchorComponentClass() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_AugmentedReality::ARSessionConfig::get_CandidateObjects() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_AugmentedReality::ARSessionConfig::get_DesiredVideoFormat() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_AugmentedReality::ARSessionConfig::get_SceneReconstructionMethod() {
    return (void*)((uintptr_t)this + 0xa9);
}
void _Script_AugmentedReality::ARSessionConfig::set_bUseOptimalVideoFormat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AugmentedReality::ARSessionConfig::get_QRCodeComponentClass() {
    return (void*)((uintptr_t)this + 0xd0);
}
int32_t& _Script_AugmentedReality::ARSessionConfig::get_MaxNumberOfTrackedFaces() {
    return *(int32_t*)((uintptr_t)this + 0x90);
}
void* _Script_AugmentedReality::ARSessionConfig::get_ImageComponentClass() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_AugmentedReality::ARSessionConfig::get_EnabledSessionTrackingFeature() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_AugmentedReality::ARSessionConfig::get_EnvironmentProbeComponentClass() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_AugmentedReality::ARSessionConfig::get_ObjectComponentClass() {
    return (void*)((uintptr_t)this + 0xe8);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARSessionConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARSessionConfig");
    return result;
}
bool _Script_AugmentedReality::ARSessionConfig::ShouldResetTrackedObjects() {
    return;
}
bool _Script_AugmentedReality::ARSessionConfig::ShouldResetCameraTracking() {
    return;
}
bool _Script_AugmentedReality::ARSessionConfig::ShouldRenderCameraOverlay() {
    return;
}
bool _Script_AugmentedReality::ARSessionConfig::ShouldEnableCameraTracking() {
    return;
}
bool _Script_AugmentedReality::ARSessionConfig::ShouldEnableAutoFocus() {
    return;
}
void _Script_AugmentedReality::ARSessionConfig::SetWorldMapData(void* WorldMapData) {
    return;
}
void _Script_AugmentedReality::ARSessionConfig::SetSceneReconstructionMethod(void* InSceneReconstructionMethod) {
    return;
}
void _Script_AugmentedReality::ARSessionConfig::SetResetTrackedObjects(bool bNewValue) {
    return;
}
void _Script_AugmentedReality::ARSessionConfig::SetResetCameraTracking(bool bNewValue) {
    return;
}
void _Script_AugmentedReality::ARSessionConfig::SetFaceTrackingUpdate(void* InUpdate) {
    return;
}
void _Script_AugmentedReality::ARSessionConfig::SetFaceTrackingDirection(void* InDirection) {
    return;
}
void _Script_AugmentedReality::ARSessionConfig::SetEnableAutoFocus(bool bNewValue) {
    return;
}
void _Script_AugmentedReality::ARSessionConfig::SetDesiredVideoFormat(_Script_AugmentedReality::ARVideoFormat NewFormat) {
    return;
}
void _Script_AugmentedReality::ARSessionConfig::SetCandidateObjectList(void*& InCandidateObjects) {
    return;
}
void* _Script_AugmentedReality::ARSessionConfig::GetWorldMapData() {
    return;
}
void* _Script_AugmentedReality::ARSessionConfig::GetWorldAlignment() {
    return;
}
void* _Script_AugmentedReality::ARSessionConfig::GetSessionType() {
    return;
}
void* _Script_AugmentedReality::ARSessionConfig::GetSceneReconstructionMethod() {
    return;
}
int32_t _Script_AugmentedReality::ARSessionConfig::GetMaxNumSimultaneousImagesTracked() {
    return;
}
void* _Script_AugmentedReality::ARSessionConfig::GetLightEstimationMode() {
    return;
}
void* _Script_AugmentedReality::ARSessionConfig::GetFrameSyncMode() {
    return;
}
void* _Script_AugmentedReality::ARSessionConfig::GetFaceTrackingUpdate() {
    return;
}
void* _Script_AugmentedReality::ARSessionConfig::GetFaceTrackingDirection() {
    return;
}
void* _Script_AugmentedReality::ARSessionConfig::GetEnvironmentCaptureProbeType() {
    return;
}
void* _Script_AugmentedReality::ARSessionConfig::GetEnabledSessionTrackingFeature() {
    return;
}
_Script_AugmentedReality::ARVideoFormat _Script_AugmentedReality::ARSessionConfig::GetDesiredVideoFormat() {
    return;
}
void* _Script_AugmentedReality::ARSessionConfig::GetCandidateObjectList() {
    return;
}
void* _Script_AugmentedReality::ARSessionConfig::GetCandidateImageList() {
    return;
}
void _Script_AugmentedReality::ARSessionConfig::AddCandidateObject(_Script_AugmentedReality::ARCandidateObject* CandidateObject) {
    return;
}
void _Script_AugmentedReality::ARSessionConfig::AddCandidateImage(_Script_AugmentedReality::ARCandidateImage* NewCandidateImage) {
    return;
}
