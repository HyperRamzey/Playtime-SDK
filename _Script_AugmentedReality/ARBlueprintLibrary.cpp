#include "..\FUObjectArray.hpp"
#include "ARBlueprintLibrary.hpp"
#include "ARCameraIntrinsics.hpp"
#include "ARCandidateImage.hpp"
#include "ARLightEstimate.hpp"
#include "ARPin.hpp"
#include "ARSessionConfig.hpp"
#include "ARSessionStatus.hpp"
#include "ARTexture.hpp"
#include "ARTextureCameraDepth.hpp"
#include "ARTextureCameraImage.hpp"
#include "ARTraceResult.hpp"
#include "ARTrackedGeometry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\IntPoint.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
void* _Script_AugmentedReality::ARBlueprintLibrary::GetAllPins() {
    return;
}
void _Script_AugmentedReality::ARBlueprintLibrary::SetARWorldScale(float InWorldScale) {
    return;
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARBlueprintLibrary");
    return result;
}
_Script_AugmentedReality::ARTextureCameraDepth* _Script_AugmentedReality::ARBlueprintLibrary::GetCameraDepth() {
    return;
}
void _Script_AugmentedReality::ARBlueprintLibrary::SetEnabledXRCamera(bool bOnOff) {
    return;
}
void _Script_AugmentedReality::ARBlueprintLibrary::SetAlignmentTransform(_Script_CoreUObject::Transform& InAlignmentTransform) {
    return;
}
void _Script_AugmentedReality::ARBlueprintLibrary::UnpinComponent(_Script_Engine::SceneComponent* ComponentToUnpin) {
    return;
}
bool _Script_AugmentedReality::ARBlueprintLibrary::GetObjectClassificationAtLocation(_Script_CoreUObject::Vector& InWorldLocation, void*& OutClassification, _Script_CoreUObject::Vector& OutClassificationLocation, float MaxLocationDiff) {
    return;
}
bool _Script_AugmentedReality::ARBlueprintLibrary::ToggleARCapture(bool bOnOff, void* CaptureType) {
    return;
}
void _Script_AugmentedReality::ARBlueprintLibrary::StopARSession() {
    return;
}
int32_t _Script_AugmentedReality::ARBlueprintLibrary::GetNumberOfTrackedFacesSupported() {
    return;
}
void _Script_AugmentedReality::ARBlueprintLibrary::StartARSession(_Script_AugmentedReality::ARSessionConfig* SessionConfig) {
    return;
}
bool _Script_AugmentedReality::ARBlueprintLibrary::GetCameraIntrinsics(_Script_AugmentedReality::ARCameraIntrinsics& OutCameraIntrinsics) {
    return;
}
void _Script_AugmentedReality::ARBlueprintLibrary::SetARWorldOriginLocationAndRotation(_Script_CoreUObject::Vector OriginLocation, _Script_CoreUObject::Rotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection) {
    return;
}
_Script_AugmentedReality::ARTexture* _Script_AugmentedReality::ARBlueprintLibrary::GetPersonSegmentationDepthImage() {
    return;
}
bool _Script_AugmentedReality::ARBlueprintLibrary::SaveARPinToLocalStore(void* InSaveName, _Script_AugmentedReality::ARPin* InPin) {
    return;
}
void* _Script_AugmentedReality::ARBlueprintLibrary::GetAllTrackedImages() {
    return;
}
_Script_CoreUObject::IntPoint _Script_AugmentedReality::ARBlueprintLibrary::ResizeXRCamera(_Script_CoreUObject::IntPoint& InSize) {
    return;
}
void _Script_AugmentedReality::ARBlueprintLibrary::RemovePin(_Script_AugmentedReality::ARPin* PinToRemove) {
    return;
}
void _Script_AugmentedReality::ARBlueprintLibrary::RemoveARPinFromLocalStore(void* InSaveName) {
    return;
}
void _Script_AugmentedReality::ARBlueprintLibrary::RemoveAllARPinsFromLocalStore() {
    return;
}
_Script_AugmentedReality::ARPin* _Script_AugmentedReality::ARBlueprintLibrary::PinComponentToTraceResult(_Script_Engine::SceneComponent* ComponentToPin, _Script_AugmentedReality::ARTraceResult& TraceResult, void* DebugName) {
    return;
}
void* _Script_AugmentedReality::ARBlueprintLibrary::GetAllTracked2DPoses() {
    return;
}
bool _Script_AugmentedReality::ARBlueprintLibrary::PinComponentToARPin(_Script_Engine::SceneComponent* ComponentToPin, _Script_AugmentedReality::ARPin* Pin) {
    return;
}
void _Script_AugmentedReality::ARBlueprintLibrary::CalculateAlignmentTransform(_Script_CoreUObject::Transform& TransformInFirstCoordinateSystem, _Script_CoreUObject::Transform& TransformInSecondCoordinateSystem, _Script_CoreUObject::Transform& AlignmentTransform) {
    return;
}
_Script_AugmentedReality::ARPin* _Script_AugmentedReality::ARBlueprintLibrary::PinComponent(_Script_Engine::SceneComponent* ComponentToPin, _Script_CoreUObject::Transform& PinToWorldTransform, _Script_AugmentedReality::ARTrackedGeometry* TrackedGeometry, void* DebugName) {
    return;
}
void _Script_AugmentedReality::ARBlueprintLibrary::PauseARSession() {
    return;
}
void* _Script_AugmentedReality::ARBlueprintLibrary::LoadARPinsFromLocalStore() {
    return;
}
void* _Script_AugmentedReality::ARBlueprintLibrary::LineTraceTrackedObjects3D(_Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon) {
    return;
}
void* _Script_AugmentedReality::ARBlueprintLibrary::LineTraceTrackedObjects(_Script_CoreUObject::Vector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon) {
    return;
}
bool _Script_AugmentedReality::ARBlueprintLibrary::IsSessionTypeSupported(void* SessionType) {
    return;
}
bool _Script_AugmentedReality::ARBlueprintLibrary::IsSessionTrackingFeatureSupported(void* SessionType, void* SessionTrackingFeature) {
    return;
}
bool _Script_AugmentedReality::ARBlueprintLibrary::IsSceneReconstructionSupported(void* SessionType, void* SceneReconstructionMethod) {
    return;
}
bool _Script_AugmentedReality::ARBlueprintLibrary::IsARSupported() {
    return;
}
void* _Script_AugmentedReality::ARBlueprintLibrary::FindTrackedPointsByName(void* PointName) {
    return;
}
bool _Script_AugmentedReality::ARBlueprintLibrary::IsARPinLocalStoreSupported() {
    return;
}
void* _Script_AugmentedReality::ARBlueprintLibrary::GetAllTrackedPlanes() {
    return;
}
bool _Script_AugmentedReality::ARBlueprintLibrary::IsARPinLocalStoreReady() {
    return;
}
void* _Script_AugmentedReality::ARBlueprintLibrary::GetSupportedVideoFormats(void* SessionType) {
    return;
}
void* _Script_AugmentedReality::ARBlueprintLibrary::GetWorldMappingStatus() {
    return;
}
void _Script_AugmentedReality::ARBlueprintLibrary::DebugDrawPin(_Script_AugmentedReality::ARPin* ARPin, _Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::LinearColor Color, float Scale, float PersistForSeconds) {
    return;
}
void* _Script_AugmentedReality::ARBlueprintLibrary::GetTrackingQualityReason() {
    return;
}
void* _Script_AugmentedReality::ARBlueprintLibrary::GetAllGeometries() {
    return;
}
void* _Script_AugmentedReality::ARBlueprintLibrary::GetTrackingQuality() {
    return;
}
_Script_AugmentedReality::ARSessionConfig* _Script_AugmentedReality::ARBlueprintLibrary::GetSessionConfig() {
    return;
}
_Script_AugmentedReality::ARTextureCameraImage* _Script_AugmentedReality::ARBlueprintLibrary::GetCameraImage() {
    return;
}
void* _Script_AugmentedReality::ARBlueprintLibrary::GetPointCloud() {
    return;
}
_Script_AugmentedReality::ARTexture* _Script_AugmentedReality::ARBlueprintLibrary::GetPersonSegmentationImage() {
    return;
}
_Script_AugmentedReality::ARLightEstimate* _Script_AugmentedReality::ARBlueprintLibrary::GetCurrentLightEstimate() {
    return;
}
float _Script_AugmentedReality::ARBlueprintLibrary::GetARWorldScale() {
    return;
}
_Script_AugmentedReality::ARTexture* _Script_AugmentedReality::ARBlueprintLibrary::GetARTexture(void* TextureType) {
    return;
}
_Script_AugmentedReality::ARSessionStatus _Script_AugmentedReality::ARBlueprintLibrary::GetARSessionStatus() {
    return;
}
void* _Script_AugmentedReality::ARBlueprintLibrary::GetAllGeometriesByClass(void* GeometryClass) {
    return;
}
void* _Script_AugmentedReality::ARBlueprintLibrary::GetAllTrackedPoses() {
    return;
}
void* _Script_AugmentedReality::ARBlueprintLibrary::GetAllTrackedPoints() {
    return;
}
void* _Script_AugmentedReality::ARBlueprintLibrary::GetAllTrackedEnvironmentCaptureProbes() {
    return;
}
_Script_CoreUObject::Transform _Script_AugmentedReality::ARBlueprintLibrary::GetAlignmentTransform() {
    return;
}
void _Script_AugmentedReality::ARBlueprintLibrary::DebugDrawTrackedGeometry(_Script_AugmentedReality::ARTrackedGeometry* TrackedGeometry, _Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::LinearColor Color, float OutlineThickness, float PersistForSeconds) {
    return;
}
void _Script_AugmentedReality::ARBlueprintLibrary::CalculateClosestIntersection(void*& StartPoints, void*& EndPoints, _Script_CoreUObject::Vector& ClosestIntersection) {
    return;
}
bool _Script_AugmentedReality::ARBlueprintLibrary::AddTrackedPointWithName(_Script_CoreUObject::Transform& WorldTransform, void* PointName, bool bDeletePointsWithSameName) {
    return;
}
_Script_AugmentedReality::ARCandidateImage* _Script_AugmentedReality::ARBlueprintLibrary::AddRuntimeCandidateImage(_Script_AugmentedReality::ARSessionConfig* SessionConfig, _Script_Engine::Texture2D* CandidateTexture, void* FriendlyName, float PhysicalWidth) {
    return;
}
bool _Script_AugmentedReality::ARBlueprintLibrary::AddManualEnvironmentCaptureProbe(_Script_CoreUObject::Vector Location, _Script_CoreUObject::Vector Extent) {
    return;
}
