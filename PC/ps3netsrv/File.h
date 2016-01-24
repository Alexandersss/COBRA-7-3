#ifndef __FILE_H__
#define __FILE_H__

#include "AbstractFile.h"
#include "compat.h"

class File :  public AbstractFile
{
protected:
	file_t fd;
public:
	File();
	~File();
	
	virtual int open(const char *path, int flags);
	virtual int close(void);
	virtual ssize_t read(void *buf, size_t nbyte);
	virtual ssize_t write(void *buf, size_t nbyte);
	virtual int64_t seek(int64_t offset, int whence);
	virtual int fstat(file_stat_t *fs);
};

#endif
