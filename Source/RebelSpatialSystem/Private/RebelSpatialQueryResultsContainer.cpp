#include "RebelSpatialQueryResultsContainer.h"

URebelSpatialQueryResultsContainer::URebelSpatialQueryResultsContainer() {
}

void URebelSpatialQueryResultsContainer::SplitResultsIntoQuadrants2D(float InitialAngle, TArray<FRebelSpatialElement_QueryResult>& UpperRight, TArray<FRebelSpatialElement_QueryResult>& BottomRight, TArray<FRebelSpatialElement_QueryResult>& BottomLeft, TArray<FRebelSpatialElement_QueryResult>& UpperLeft) const {
}

void URebelSpatialQueryResultsContainer::GetResultsAsLocations(TArray<FVector>& Locations) const {
}

TArray<FRebelSpatialElement_QueryResult> URebelSpatialQueryResultsContainer::GetResultsAsElements() const {
    return TArray<FRebelSpatialElement_QueryResult>();
}

void URebelSpatialQueryResultsContainer::GetResultsAsActors(TArray<AActor*>& Actors) const {
}

int32 URebelSpatialQueryResultsContainer::GetNumResults() const {
    return 0;
}


