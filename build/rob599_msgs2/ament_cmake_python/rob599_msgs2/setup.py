from setuptools import find_packages
from setuptools import setup

setup(
    name='rob599_msgs2',
    version='0.0.0',
    packages=find_packages(
        include=('rob599_msgs2', 'rob599_msgs2.*')),
)
