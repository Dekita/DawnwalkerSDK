#pragma once
#include "CoreMinimal.h"
#include "CommonGameViewportClient.h"
#include "DawnwalkerGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class DAWNWALKER_API UDawnwalkerGameViewportClient : public UCommonGameViewportClient {
    GENERATED_BODY()
public:
    UDawnwalkerGameViewportClient();

};

