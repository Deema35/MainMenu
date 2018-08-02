#pragma once

#include <vector>
#include <memory>
#include <functional>
#include <map>

template<typename T, typename ID>
class ItemStorage
{
public:
	ItemStorage() : IDEnd(0) {}

	ItemStorage(std::function<std::unique_ptr<T>(ID)> Creater, ID _IDEnd) : IDEnd(size_t(_IDEnd))
	{
		Storage.reserve(IDEnd);

		for (size_t i = 0; i < IDEnd; i++)
		{
			Storage.push_back(Creater(ID(i)));
		}
	}

	T& Get(ID Type) { if (size_t(Type) < IDEnd) return *Storage[size_t(Type)].get(); else throw; }

	const T& Get(ID Type) const { if (size_t(Type) < IDEnd) return *Storage[size_t(Type)].get(); else throw; }

private:

	std::vector<std::unique_ptr<T>> Storage;

	size_t IDEnd;
};


template<typename T, typename ID>
class FMenuSettingsPropertyBase
{
public:
	FMenuSettingsPropertyBase(T& _Property) : Property(_Property) {}

	virtual ~FMenuSettingsPropertyBase() {}

	virtual ID GetType() const = 0;

	void SetProperty(T NewProperty) { Property = NewProperty; }

	virtual FText GetPropertyName() const = 0;

	T GetProperty() const { return Property; }

protected:

	T & Property;
};