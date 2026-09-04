#include "RebelLocomotionAnimGraphLibrary.h"

URebelLocomotionAnimGraphLibrary::URebelLocomotionAnimGraphLibrary() {
}

FBlendSpacePlayerReference URebelLocomotionAnimGraphLibrary::SetStartPosition(const FBlendSpacePlayerReference& BlendSpacePlayer, float StartPosition) {
    return FBlendSpacePlayerReference{};
}

FBlendSpacePlayerReference URebelLocomotionAnimGraphLibrary::SetAccumulatedTime(const FBlendSpacePlayerReference& BlendSpacePlayer, float Time) {
    return FBlendSpacePlayerReference{};
}

FSequencePlayerReference URebelLocomotionAnimGraphLibrary::SeekToCurveValue(const FSequencePlayerReference& SequencePlayer, FName CurveName, float CurveValue, float SeekStartPosition, float& OutPosition, float MinCurveChangeRate, float MaxCurveChangeRate) {
    return FSequencePlayerReference{};
}

FBlendSpacePlayerReference URebelLocomotionAnimGraphLibrary::SeekStartPositionToCurveValue(const FBlendSpacePlayerReference& BlendSpacePlayer, FName CurveName, float CurveValue, FVector position, float SeekStartPosition, float& OutStartPosition, float MinCurveChangeRate, float MaxCurveChangeRate) {
    return FBlendSpacePlayerReference{};
}

FSequencePlayerReference URebelLocomotionAnimGraphLibrary::ExtractCurveValue(const FSequencePlayerReference& SequencePlayer, FName CurveName, float& OutCurveValue) {
    return FSequencePlayerReference{};
}

FBlendSpacePlayerReference URebelLocomotionAnimGraphLibrary::ExtractBlendSpaceCurveValue(const FBlendSpacePlayerReference& BlendSpacePlayer, FName CurveName, float& OutCurveValue) {
    return FBlendSpacePlayerReference{};
}


