#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "RebelSpatialElement_QueryResult.h"
#include "RebelSpatialQueryResultsContainer.generated.h"

class AActor;

UCLASS(Blueprintable)
class REBELSPATIALSYSTEM_API URebelSpatialQueryResultsContainer : public UObject {
    GENERATED_BODY()
public:
    URebelSpatialQueryResultsContainer();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void SplitResultsIntoQuadrants2D(float InitialAngle, TArray<FRebelSpatialElement_QueryResult>& UpperRight, TArray<FRebelSpatialElement_QueryResult>& BottomRight, TArray<FRebelSpatialElement_QueryResult>& BottomLeft, TArray<FRebelSpatialElement_QueryResult>& UpperLeft) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetResultsAsLocations(TArray<FVector>& Locations) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRebelSpatialElement_QueryResult> GetResultsAsElements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetResultsAsActors(TArray<AActor*>& Actors) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumResults() const;
    
};

