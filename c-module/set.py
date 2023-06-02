from setuptools import setup, Extension

dog = Extension('dog', sources=['dog.c'])

setup(name='dog', version='1.0', description='eat', ext_modules=[dog])