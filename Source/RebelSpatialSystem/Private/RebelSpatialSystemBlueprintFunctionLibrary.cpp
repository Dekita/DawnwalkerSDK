#include "RebelSpatialSystemBlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"

URebelSpatialSystemBlueprintFunctionLibrary::URebelSpatialSystemBlueprintFunctionLibrary() {
}

URebelSpatialQueryResultsContainer* URebelSpatialSystemBlueprintFunctionLibrary::RunQuery(const FRebelSpatialQueryRequest& Query) {
    return NULL;
}

URebelSpatialQueryResultsContainer* URebelSpatialSystemBlueprintFunctionLibrary::GetElementsFromLayersInDistance(const UObject* WorldContextObject, FGameplayTagContainer Layers, const FVector& Center, float Distance) {
    return NULL;
}

FVector URebelSpatialSystemBlueprintFunctionLibrary::GetElementLocation(const FRebelSpatialElement_QueryResult& Element) {
    return FVector{};
}

URebelSpatialElementDefinition* URebelSpatialSystemBlueprintFunctionLibrary::GetElementDefinitionAs(const FRebelSpatialElement_QueryResult& Element, TSubclassOf<URebelSpatialElementDefinition_Complex> DefinitionType) {
    return NULL;
}

AActor* URebelSpatialSystemBlueprintFunctionLibrary::GetElementActor(const FRebelSpatialElement_QueryResult& Element) {
    return NULL;
}


