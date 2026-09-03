#pragma once
#include "CoreMinimal.h"
#include "CommonInputBaseControllerData.h"
#include "KiBLIIKeysWidgetData.h"
#include "KiBLIICommonInputBaseControllerData.generated.h"

class UKiBLIIKeysWidget;

UCLASS(Abstract, Blueprintable)
class KIBLIICOMMONUI_API UKiBLIICommonInputBaseControllerData : public UCommonInputBaseControllerData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKiBLIIKeysWidget* KeysWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKiBLIIKeysWidgetData> KeysWidgetData;
    
public:
    UKiBLIICommonInputBaseControllerData();

};

