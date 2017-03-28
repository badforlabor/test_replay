#pragma once

#include "MyGameHelper.generated.h"

UCLASS()
class UMyGameHelper : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = MyGame)
		static void PauseDemo(UObject*obj, bool b);

};