# Python
Ubuntu 16.04 ships with both Python 3 and Python 2 pre-installed. To make sure that our versions are up-to-date, let’s update and upgrade the system with apt-get:
```bash
$ sudo apt-get update
$ sudo apt-get -y upgrade
```

To manage software packages for Python, let’s install pip:

```bash
$ sudo apt-get install -y python3-pip
$ pip3 install package_name
```
