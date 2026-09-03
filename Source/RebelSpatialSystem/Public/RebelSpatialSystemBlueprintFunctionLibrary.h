#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "RebelSpatialElement_QueryResult.h"
#include "RebelSpatialQueryRequest.h"
#include "Templates/SubclassOf.h"
#include "RebelSpatialSystemBlueprintFunctionLibrary.generated.h"

class AActor;
class UObject;
class URebelSpatialElementDefinition;
class URebelSpatialElementDefinition_Complex;
class URebelSpatialQueryResultsContainer;

UCLASS(Blueprintable)
class REBELSPATIALSYSTEM_API URebelSpatialSystemBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URebelSpatialSystemBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static URebelSpatialQueryResultsContainer* RunQuery(const FRebelSpatialQueryRequest& Query);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URebelSpatialQueryResultsContainer* GetElementsFromLayersInDistance(const UObject* WorldContextObject, FGameplayTagContainer Layers, const FVector& Center, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetElementLocation(const FRebelSpatialElement_QueryResult& Element);
    
    UFUNCTION(BlueprintCallable)
    static URebelSpatialElementDefinition* GetElementDefinitionAs(const FRebelSpatialElement_QueryResult& Element, TSubclassOf<URebelSpatialElementDefinition_Complex> DefinitionType);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetElementActor(const FRebelSpatialElement_QueryResult& Element);
    
};

