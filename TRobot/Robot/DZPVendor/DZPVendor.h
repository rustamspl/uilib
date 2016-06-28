#pragma once
#include "AbstractVendor.h"
class CDZPVendor :
	public AbstractVendor
{
public:
	CDZPVendor();
	~CDZPVendor();

	virtual void Init(const std::string& ip, size_t port);
	virtual void Login(const std::string& user, const std::string& password);
	virtual void Logout();
	virtual void SearchAll();
	virtual void Search(const size_t channel, const time_range& range);
	virtual void Download(const size_t channel, const time_range& range);
	virtual void PlayVideo(const size_t channel, const time_range& range);

	virtual void Download(const size_t channel, const std::string& filename);
	virtual void PlayVideo(const size_t channel, const std::string& filename);
	virtual void SetDownloadPath(const std::string& Root);
	virtual void throwException();

protected:
	std::string  m_sLastError;

	/* Login */
	long m_lLoginHandle; // Handle of Login Device
	string m_ip;	// Device IP Address
	size_t m_port;	// Device Port

	void* handle;
};
